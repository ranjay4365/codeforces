#include<bits/stdc++.h>
//#include<unordered_map>
using namespace std;


class Node{
    public:
        Node *lchild;
        int data;
        Node *rchild;
    public:
        Node(int data){
            this->data=data;
            lchild=NULL;
            rchild=NULL;
        }
};
class Tree{
    public:
        Node *root;
    public:
        Tree(){
            root=NULL;
        }
        Node * createTree(){
            Node *p,*t;
            queue<Node *>q;
            int x;
            cout<<"Enter root data:";
            cin>>x;
            root=new Node(x);
            Node *temp=root;
            q.push(root);
            while(q.size()!=0){
                p=q.front();
                q.pop();
                cout<<"Enter left Child (-1 for no value)";
                cin>>x;
                if(x!=-1){
                    t=new Node(x);
                    p->lchild=t;
                    q.push(t);
                }

                cout<<"Enter right Child (-1 for no value)";
                cin>>x;
                if(x!=-1){
                    t=new Node(x);
                    p->rchild=t;
                    q.push(t);
                }
            }
            return temp;
        }
        void preorderT(Node * root){
			stack<Node *>st;
//			st.push(root);
			Node *t=root;
			while(t!=NULL || !st.empty()){
			
			if(t!=NULL){
				cout<<t->data;
				st.push(t);
				t=t->lchild;
			}
			else{
				t=st.top();
				st.pop();
				t=t->rchild;
			}
			}
		}
		void inorderT(Node *root){
			stack<Node *>st;
			Node *t=root;
			while(t!=NULL || !st.empty()){
				if(t!=NULL){
					st.push(t);
					t=t->lchild;
				}
				else{
					t=st.top();
					cout<<t->data;
					st.pop();
					t=t->rchild;
				}
			}
		}
		int countNodes(Node *root){
			if(root!=NULL){
				if(root->lchild==NULL || root->rchild==NULL){
					return 0;
				}
				int x=countNodes(root->lchild);
				int y=countNodes(root->rchild);
				return x+y+1;
			}
			return 0;
		}
		int countLeafNodes(Node *root,int &count){
			if(root!=NULL){
				if(root->lchild==NULL && root->rchild==NULL){
					count+= 1;
				}
				countLeafNodes(root->lchild,count);
				countLeafNodes(root->rchild,count);	
			}
			return count;
		}
		int countTwoDeg(Node *root,int &count){
			if(root!=NULL){
				if(root->lchild!=NULL && root->rchild!=NULL){
					count+=1;
				}
				countTwoDeg(root->lchild,count);
				countTwoDeg(root->rchild,count);
			}
			return count;
		}
		int countOneDeg(Node *root,int &count){
			if(root!=NULL){
				if((root->lchild!=NULL && root->rchild==NULL)||(root->lchild==NULL && root->rchild!=NULL)){
					count+=1;
				}
				countOneDeg(root->lchild,count);
				countOneDeg(root->rchild,count);
			}
			return count;
		}
        void preorder(Node *root){
            if(root==NULL){
                return ;
            }
            cout<<root->data;
            preorder(root->lchild);
            preorder(root->rchild);
        }
        void postorder(Node *root){
            if(root==NULL){
                return ;
            }
            
            postorder(root->lchild);
            postorder(root->rchild);
            cout<<root->data;
        }
        void inorder(Node *root){
            if(root==NULL){
                return ;
            }
            
            inorder(root->lchild);
            cout<<root->data;
            inorder(root->rchild);
        }
        int heightOfTree(Node *root){
        	
        	if(root!=NULL){
        		int x=heightOfTree(root->lchild);
        		int y=heightOfTree(root->rchild);
        		if(x>y){
        			return x+1;
				}
				else{
					return y+1;
				}
			}
			return 0;
		}
        
};

//void levelOrderPrint(Node *root){
//    queue<Node *>que;
//    cout<<root->data;
//    que.push(root);
//    while(!que.empty()){
//        Node *p=que.front();
//        que.pop();
//        if(p->lchild){
//            cout<<p->lchild->data;
//            que.push(p->lchild);
//        }
//        if(p->rchild){
//            cout<<p->rchild->data;
//            que.push(p->rchild);
//        }
//
//    }
//
//}
//void preorderT(Node * root){
//	stack<Node *>st;
////	st.push(root);
//	Node *t=root;
//	while(t!=NULL || !st.empty()){
//		
//		if(t!=NULL){
//			
//			cout<<t->data;
//			st.push(t);
//			t=t->lchild;
//		}
//		else{
//			t=st.top();
//			st.pop();
//			t=t->rchild;
//		}
//	}
//	
//}

int main(){
    Tree t;
    Node *root=t.createTree();
    int s=0;
    
    cout<<"Height of Tree is displayed value minus one:"<<endl<<t.heightOfTree(root);
//  cout<<t.countNodes(root);
//  cout<<t.countLeafNodes(root,s);
//	cout<<t.countTwoDeg(root,s);
//	cout<<t.countOneDeg(root,s);
//	levelOrderPrint(root);
//	preorderT(root);
//	t.inorderT(root);
//    t.preorder(root);
//	cout<<endl;
//	t.postorder(root);
//	cout<<endl;
//	t.inorder(root);

    
}
