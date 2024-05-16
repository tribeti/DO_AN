#include<iostream>

using namespace std;

struct node {
	int data;
	node* left;
	node* right;
};

typedef struct node Node;

Node* root;
// tạo cây nhị phân rỗng
void khoiTaoCay() {
	root = NULL;
}

void themNodeVaoCay(Node*& root, int x) {            // vd ta có mảng [10 , 5 , 15 , 3 , 7]             
	if (root == NULL) {                              // root = 10 sau đó tạo 2 Node mới trái phải rỗng
		Node* p = new Node;							// quy tắc thêm của cây nhị phân :
		p->data = x;								// nhỏ sang trái , lớn sang phải
		p->left = NULL;                              // 5 < 10 -> 
		p->right = NULL;							     //     10
		root = p;									 //    /
	}												 //   5
	else {											// tương tự ta được
        if (x < root->data) {						//        10
            themNodeVaoCay(root->left, x);			//       /  |
        }											//		5   15
        else if (x > root->data) {					//	   / \	
            themNodeVaoCay(root->right, x);			//    3   7
        }
    }
}

void duyetTruocNLR(Node* root) {
	if (root != NULL) {
		std::cout << root->data;
		duyetTruocNLR(root->left);
		duyetTruocNLR(root->right);
	}
}

void duyetGiuaLNR(Node* root) {
	if (root != NULL) {
		duyetGiuaLNR(root->left);
		std::cout << root->data;
		duyetGiuaLNR(root->right);
	}
}

void duyetSauLRN(Node* root) {
	if (root != NULL) {
		duyetSauLRN(root->left);
		duyetSauLRN(root->right);
		std::cout << root->data;
	}
}

void lnr(Node* root) {
	Node* pre;
	Node* current = root;
	while (current)	{
		if (!current->left) {
			std::cout << current->data << "\n";
			current = current->right;
		}
		else {
			pre = current->left;
			while (pre->right && pre->right != current) {
				pre = pre->right;
			}
			if (!pre->right)	{
				pre->right = current;
				current = current->left;
			}
			else {
				std::cout << current->data << "\n";
				pre->right = NULL;
				current = current->right;
			}
		}
	}
}

int timKiem(Node* root, int t) {
	if (root != NULL) {
		if (root->data == t) {
			return 1;
		}
		else if (root->data > t) {
			return timKiem(root->left, t);
		}
		else if (root->data < t) {
			return timKiem(root->right, t);
		}
	}
	return 0;
}


// bài 4 
int countLeaves(Node* root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }
    return countLeaves(root->left) + countLeaves(root->right);
}

// ví dụ về đếm số nút lá
/*
		10
	   /  \
	  5   15
	 / \
	3   7

	10 có 2 node con nên = 0
	5 có 2 node con nên = 0
	3 không có node con + 1
	7 không có node con + 1
	15 không có node con + 1
	tổng là 3
*/

int height(Node* root) {
    if (root == NULL) {
        return -1; // Chiều cao của cây rỗng là -1
    } else {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
		// +1 là cộng thêm nút gốc
        return max(leftHeight, rightHeight) + 1;
    }
}

// ví dụ về chiều cao cây nhị phân
/*
		10
	   /  \
	  5   15
	 / \
	3   7

	leftHeight = height(root->left) = height(5) -> max(0 , 0) + 1 = 1
									 /       \
									v         v 
							0 = height(3)  height(7) = 0 (do 7 không có node con nên = max(-1,-1) + 1 = 0)
	rightHeight = height(root->right) = height(15) = 0 (tương tự như trên)

	==> cuối cùng là Node root = max(leftHeight, rightHeight) + 1 = max(1,0) + 1 = 2
*/

int main() {
	int a[] = {10 , 5 , 15 , 3 , 7};
	int n = sizeof(a) / sizeof(a[0]);
	khoiTaoCay();
	for (int i = 0; i < n; i++) {
		themNodeVaoCay(root, a[i]);
	}





	// bài 4
	std::cout << "So la cua cay nhi phan la : " << countLeaves(root) << endl;
	std::cout << "Chieu cao cua cay nhi phan la : " << height(root) << endl;
	return 0;
}