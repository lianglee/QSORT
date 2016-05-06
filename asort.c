/**
 * A program the sort the strings in ascending order.
 * 
 * @Package:   OSSN.C backend
 * @Author:    Syed Arsalan Hussain Shah
 * @copyright: 2016 SOFTLAB24 LIMITED
 * @license:   General Public Licence http://www.opensource-socialnetwork.org/licence
 * @link:      http://www.opensource-socialnetwork.org/
 * BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW.
 * YOUR USE OF THIS CODE SHALL BE GOVERNED BY SWISS LAW AND SHALL BE SUBJECT TO THE EXCLUSIVE JURISDICTION OF THE SWISS COURTS.
 */
 
#include <stdio.h>
#include <stdlib.h>

char asort(const char * a, const char * b ) {
    return *(char*)b - *(char*)a;
}
int main() {
    int i;
    const char *names[] = {"Waqar","Noman","Arsalan"};

    qsort(names, 3, sizeof(char*), asort);

    for (i=0; i< 3; ++i){
      printf("%s\n", names[i]); 	
   }
}
