#include <stdio.h>
#include <math.h>
#include<cstdlib>

int n = 20;
int x[100000];

struct treenode{
	int numbs, count;
	struct treenode *left;
	struct treenode *right;
};

typedef struct treenode tnode;

void readfile(){
	int i; FILE *p;
	p = fopen("bai22.dat", "r");
	for(i = 0; i < n; i++){
		fscanf(p,"%d", &x[i]);
	}
	fclose;
}

tnode *talloc(){
	return (tnode*)malloc(sizeof(tnode));
}

tnode *addnode(tnode *p, int q){
	if(p == NULL){
		p = talloc();
		p->numbs = q; p->count = 1;
		p->left = p->right = NULL;
	}
	else if(p->numbs==q)
		p->count ++;
	else if(p->numbs>q)
		p->left = addnode(p->left, q);
	else
		p->right = addnode(p->right, q);
	return p;
}

void treeprintf(tnode *p){
	if(p != NULL){
		printf("%d %d\n", p->numbs, p->count);
		treeprintf(p->left);
		treeprintf(p->right);
	}
}

int main(){
	tnode *root; int i;
	readfile();
	root = NULL;
	for(i = 0; i<n; i++){
		root = addnode(root, x[i]);
	}
	treeprintf(root);
	return 0;
}

