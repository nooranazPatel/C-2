/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: nooranazpatel
 * student number: 991341135
 *
 * Created on April 22, 2022, 4:25 p.m.
 */

#include <cstdlib>
#include <stdio.h>
#include "Tree.h"
using namespace std;

/*
 * 
 */

int main()
{
    int num = 0;
    int Bcount = 0;
    struct branch* root = NULL;
    printf("\n Please enter in any amount of numbers and press (-1) to stop : \n");
    while (num != -1)
    {
        scanf("%d", &num);
        if (num != -1)
            root = insert(root, num);
        if (num == 8)
        {
            Bcount++;
        }
    }
    printf("The BinaryTree is :  ");
    PrintBranch(root);
    printf("\n\nTree in Reverse order  is :  ");
    PrintReverseorder(root);
    printf("\nNumber of times '8' has appeared is :  ");
    printf("%d", Bcount);
    return 0;
}
