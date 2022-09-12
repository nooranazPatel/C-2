/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Root.h
 * Author: nooranazpatel
 *Student NUmber: 991341135
 * Created on April 22, 2022, 4:25 p.m.
 */
#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
using namespace std;

struct branch* insert(struct branch* root, int data)
{
    if (root == NULL)
    {
        root = (struct branch*)malloc(sizeof(struct branch));
        root->limb = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else if (data == root->limb)
    {
        return root;
    }
    else
    {

        if (root->limb < data)
            root->right = insert(root->right, data);
        else
        {

            if (root->limb > data)
                root->left = insert(root->left, data);
        }
    }
    return root;
}

void PrintBranch(struct branch* root)
{
    if (root != NULL)
    {

        PrintBranch(root->left);
        printf("\t%d", root->limb);
        PrintBranch(root->right);
    }
    return;
}

void PrintReverseorder(struct branch* root)
{
    if (root != NULL)
    {
        PrintReverseorder(root->right);
        printf("\t%d", root->limb);
        PrintReverseorder(root->left);
    }
    return;
}





