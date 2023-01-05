#include "tree.h"

int main(){
    cout << "================================================================================" << endl;
    int x[9] = {5,3,9,10,4,7,1,8,6};
     /* Tampilkan isi dari array */
     for(int i = 0 ; i < 9 ; i++){
        cout << x[i] << " ";
     }
     /* 1. Tambahkan setiap elemen array x kedalam BST secara berurutan */
     /* sehingga dihasilkan BST seperti Gambar 1, gunakan looping*/
     adrNode root = NULL;
     for(int i = 0 ; i < 9 ; i++){
        adrNode p = newNode_1301210062(x[i]);
        insertNode_1301210062(root, p);
     }
     /* 2. Tampilkan node dari BST secara Pre-Order */
     printf("\n");
     printf("\nPre Order\t\t: ");
     printPreOrder_1301210062(root);
     /* 3. Tampilkan keturunan dari node 9*/
     printf("\n");
     printf("\nDescendent of Node 9\t: ");
     printDescendant_1301210062(root, 9);
     /* 4. Tampilkan total info semua node pada BST */
     printf("\n");
     printf("\nSum of BST Info\t\t: ");
     cout << sumNode_1301210062(root);
     /* 5. Tampilkan banyaknya daun dari BST */
     printf("\nNumber of Leaves\t: ");
     cout << countLeaves_1301210062(root);
     /* 4. Tampilkan Tinggi dari Tree*/
     printf("\nHeight of Tree\t\t: ");
     cout << heightTree_1301210062(root);
     cout << endl << "================================================================================";
     return 0;
}
