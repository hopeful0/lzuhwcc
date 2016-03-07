#include "route.h"
#include "lib_record.h"
#include <stdio.h>
#include <string>

#define DEBUG 1

using namespace std;

typedef struct Graph
{
    unsigned short lnk;
    unsigned short src;
    unsigned short dst;
    unsigned short cos;
}GRAPH;

void search_route(char *graph[5000], int edge_num, char *condition)
{
    unsigned short result[] = {2, 6, 3};
    int iset_num;
    GRAPH gp[edge_num];
    unsigned short src,dst,iset[50];
//store the data and printf them in DEBUG mode
    for (int i = 0; i < edge_num; i++)
    {
        sscanf(graph[i],"%hd,%hd,%hd,%hd",&gp[i].lnk,&gp[i].src,&gp[i].dst,&gp[i].cos);
        if(DEBUG)
            printf("%hd %hd %hd %hd\n",gp[i].lnk,gp[i].src,gp[i].dst,gp[i].cos);
    }
    sscanf(condition,"%hd,%hd",&src,&dst);
    string scon(condition);
    scon.erase(0,scon.rfind(',',8)+1);
    for (iset_num = 0; ; iset_num++)
    {
        sscanf(scon.c_str(),"%hd",&iset[iset_num]);
        int t = scon.find('|',0);
        if(t == string::npos)
            break;
        scon.erase(0,t+1);
    }
    iset_num++;
    if(DEBUG)
    {
        printf("src:%hd\ndst:%hd\nisets:\n",src,dst);
        for (int i = 0; i < iset_num; i++)
            printf("%hd\n",iset[i]);
    }
//the search method


//record the result
    for (int i = 0; i < 3; i++)
        record_result(result[i]);
}

