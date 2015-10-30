#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BLACK 0
#define RED 1
#define NIL 2000000
#define NIL_T -2000000

struct nodetree
{
	int key;
	struct nodetree *left;
	struct nodetree *right;
	struct nodetree *p;
	struct nodetree *hijoT;
	int color;
};

void inordertreewalk (struct nodetree *x)
{
	if (x->key != NIL)
	{
		inordertreewalk (x->left);
		printf ("%d ", x->key);
		inordertreewalk (x->right);
	}
	return;
}

struct nodetree *treesearch (struct nodetree *x, int k)
{
	if ((x->key==NIL) || (k==x->key))
		return x;
	if (k < x->key)
		return treesearch (x->left, k);
	else
		return treesearch (x->right, k);
}

struct nodetree *crearNil(struct nodetree *n)
{    
     struct nodetree *nil;
     
     nil=(struct nodetree *) malloc (sizeof (struct nodetree));
     
     nil->p=n;
     nil->color=BLACK;
     nil->key=NIL; 
     return nil;
}

struct nodetree *crearNilRoot(struct nodetree *n)
{    
     struct nodetree *nilRoot;
     
     nilRoot=(struct nodetree *) malloc (sizeof (struct nodetree));
     
     n->p=nilRoot;
     nilRoot->hijoT = n;
     nilRoot->color=BLACK;
     nilRoot->key=NIL_T; 
     return nilRoot;
}


void leftRotate(struct nodetree **T,struct nodetree *z)
{
     struct nodetree *y;
     
     y=z->right;
     z->right=y->left;
     y->left->p=z;
     y->p=z->p;
     
     if((z->p->key)==NIL_T)
       {
            *T=y;                            
       }
     else{
             if(z==(z->p->left))
                z->p->left=y;   
             else
                z->p->right=y;               
          }
     y->left=z;
     z->p=y;                 
}

void rightRotate(struct nodetree **T,struct nodetree *x)
{
     struct nodetree *y;
     
     y=x->left;
     x->left=y->right;
     y->right->p=x;
     y->p=x->p;
     
     if((x->p->key)==NIL_T)
       {
            *T=y;                            
       }
     else{
             if(x==(x->p->right))
                x->p->right=y;   
             else
                x->p->left=y;               
          }
     y->right=x;
     x->p=y;                 
}

struct nodetree *RB_InsertFixup(struct nodetree *T, struct nodetree *z)
{
     struct nodetree *y;   
            
     while((z->p->color)==RED)
     {
              if((z->p)==(z->p->p->left))
                {                                       
                    y=z->p->p->right;
                    
                    if((y->color)==RED)
                      {
                          z->p->color=BLACK;
                          y->color=BLACK;
                          z->p->p->color=RED;
                          z=z->p->p;
                      }
                    else{
                            if(z==(z->p->right))
                              {
                                  z=z->p;
                                  leftRotate(&T,z);
                              }
                            z->p->color=BLACK;
                            z->p->p->color=RED;
                            rightRotate(&T,z->p->p);
                        }
                }
                else{                                   
                        y=z->p->p->left;
                    
                        if((y->color)==RED)
                          {                             
                            z->p->color=BLACK;
                            y->color=BLACK;
                            z->p->p->color=RED;
                            z=z->p->p;
                          }
                        else{                           
                             if(z==(z->p->left))
                                {
                                    z=z->p;
                                    rightRotate(&T,z);
                                }
                              z->p->color=BLACK;
                              z->p->p->color=RED;
                              leftRotate(&T,z->p->p);
                            }
                    }                  
          }
      T->color=BLACK;
      return T;
}

struct nodetree *RB_Insertion(struct nodetree *T, struct nodetree *z)
{    
	 struct nodetree *y, *x;
	 
	 
     x=T;
     
     while(x->key!=NIL)
          {
             y=x;
             if((z->key)<(x->key))
                     x=x->left;
             else
			 	 	 x=x->right;                     
          }
	 
	 z->p=y;
	 
	 if(y->key==NIL_T)
	 	T=z;
	 else
	 	 {
		      if((z->key)<(y->key))
		          y->left=z;
        	  else   y->right = z;
		 }
			  	  	  
	 z->left=crearNil(z);
	 z->right=crearNil(z);
	 z->color=RED;
	 T = RB_InsertFixup(T,z);   
	 
	 return T;                  
}




struct nodetree *treeminimum (struct nodetree *x)
{
	while (x->left->key != NIL)
		x = x->left;
	return x;
}


struct nodetree *treemaximum (struct nodetree *x)
{
	while (x->right->key != NIL)
		x = x->right;
	return x;
}


struct nodetree *treesuccessor (struct nodetree *x)
{
	struct nodetree *y;
	if (x->right->key != NIL)
		return treeminimum (x->right);
	y = x->p;
	while ((y->key!=NIL) && (x==y->right))
	{
		x = y;
		y = y->p;
	}
	return y;
}



struct nodetree *RB_DeleteFixup(struct nodetree *T, struct nodetree *x)
{
  
    struct nodetree *w;
    
    while((x!=T)&&(x->color=BLACK))
         {
              if(x==x->p->left)
                {
                    w=x->p->right;
                    
                    if(w->color==RED)
                      {
                          w->color=BLACK;
                          x->p->color=RED;
                          leftRotate(&T,x->p);
                          w=x->p->right;
                      }
                    
                    if((w->left->color==BLACK)&&(w->right->color==BLACK))
                       {
                          w->color=RED;
                          x=x->p;
                       }
                       else{
                                if((w->right->color)==BLACK)
                                  {
                                      w->left->color=BLACK;
                                      w->color=RED;
                                      rightRotate(&T,w);
                                      w=x->p->right;
                                  }
                                  w->color=x->p->color;
                                  x->p->color=BLACK;
                                  w->right->color=BLACK;
                                  leftRotate(&T,x->p);
                                  x=T;
                            }
                }
                else
                {
                    w=x->p->left;
                    
                    if(w->color==RED)
                      {
                          w->color=BLACK;
                          x->p->color=RED;
                          rightRotate(&T,x->p);
                          w=x->p->left;
                      }
                    
                    if((w->right->color==BLACK)&&(w->left->color==BLACK))
                       {
                          w->color=RED;
                          x=x->p;
                       }
                       else{
                                if((w->left->color)==BLACK)
                                  {
                                      w->right->color=BLACK;
                                      w->color=RED;
                                      leftRotate(&T,w);
                                      w=x->p->left;
                                  }
                                  w->color=x->p->color;
                                  x->p->color=BLACK;
                                  w->left->color=BLACK;
                                  rightRotate(&T,x->p);
                                  x=T;
                            }
                        
                    }
         }
         
    x->color=BLACK;
}




struct nodetree *RB_Delete(struct nodetree **T, struct nodetree *z)
{
    struct nodetree *y, *x;
    
    if((z->left->key==NIL)||(z->right->key==NIL))
      {
          y=z;
      }  
      else{
              y=treesuccessor(z);
          }
      
    if(y->left->key!=NIL)
      {
          x=y->left;
      }
      else{
              x=y->right;
          }
    
    x->p=y->p;
    
    if(y->p->key==NIL_T) 
      *T=x;
    else{
          if(y==y->p->left)
             y->p->left=x;
          else
             y->p->right=x;
        }
    if(y!=z)
      z->key=y->key;
    
    if(y->color==BLACK)
      RB_DeleteFixup(*T,x);
    
    return y;
}


int main ()
{
    struct nodetree *T, *z;
    int n, element, i;
        
    printf ("Total de numeros a almacenar en el ABB?; ");
    scanf ("%d", &n);
    
    printf ("Digite numero: ");
    scanf ("%d", &element);
    T = (struct nodetree *) malloc (sizeof (struct nodetree));
    T->key = element;
    T->left = crearNil(T);
    T->right = crearNil(T);
    T->p = crearNilRoot(T);
    T->color = BLACK;
    
    for (i=2; i<=n; i++)
    {
        printf ("Digite numero: ");
        scanf ("%d", &element);
        z = (struct nodetree *) malloc (sizeof (struct nodetree));
        z->key = element;
		T = RB_Insertion(T, z);
    }
    
    printf ("\nRecorrido Inorder:\n");
    inordertreewalk (T);
    printf ("\nTotal de elementos a borrar del ABB?: ");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        printf ("Digite numero a borrar: ");
        scanf ("%d", &element);
        z = treesearch (T, element);
        if (z->key == NIL)
           printf ("El numero %d no esta en el arbol\n", element);
        else
        {
            z = RB_Delete(&T, z);
            free (z);
            inordertreewalk (T);
            printf("\n");
        }  
    }
    return 0;
}
