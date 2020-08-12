/*
 * Inserccion.cxx
 * 
 * Copyright 2016 Gabriel Vargas <gabreta@VmGabriel96>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int aleatorio ()
{
    int a=rand() % 5000 + 5000;
    return a;
}

int * intercambio (int a[], int posa,int posb)
{
    //posa = posicion de origen
    //posb = posicion de destino
    int temp=a[posb];
    a[posb]=a[posa];
    a[posa]=temp;
    return a;
}
  
int * inserccion (int a[], int N)
{
    int i,j,v;
    for (i=2; i<=N; i++)
    {
	j=i;
	v=a[j];
	while(a[j-1]>v && j>1)
	{
	    a[j]=a[j-1];
	    j--;
	}
	a[j]= v;
    }
    return a;
}

int main(int argc, char **argv)
{
    int n=200;
    int s[n];
    for (int i=0;i<n;i++)
    {
	s[i]=aleatorio();
    }
    int * d = inserccion(s,n);
    return 0;
}
