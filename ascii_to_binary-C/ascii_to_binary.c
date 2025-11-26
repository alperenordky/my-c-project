
#include <stdio.h>
void display(int *array,int size)
{
    int i,k;

    k = 0;
    i = 0;
    while(i < size)
    {

        printf("%d",array[i]);
        k++;
        if(k == 8)
        {
            printf("\n");
            k = 0;
        }
        i++;
        
    }
}

void ascii_to_binary(int *ascii_array,int size,int *bits)
{
    int j, i, k;
    i = 0;

    while(i < size)
    {
        int deger;
        int j ,k;
        deger = ascii_array[i];
        j = 8 * (i+1);
        k =  j - 1;

        while(deger > 0)
        {
            bits[k] = deger % 2;
            deger = deger / 2; 
            k--;  
        }

        while(k >= j-8)
        {
            bits[k] = 0;
            k--;
        }

        i++;
     }
}

int main(int argc,char **argv)
{
    
    int size, bits_size;
    int i;

    i = 0;
    size = 0;

    while(argv[1][size] != '\0')
    {
        size++;
    }
    
    int array[size];

    // Aldığımız girdinin her karakterini ASCİİ değere dönüştürüp arraye atıyoruz.
    while(i < size)
    {
        array[i] = argv[1][i];
        i++;
    }
    int bits[size*8];
    
    // bit değerlerini hesaplayıp bits adındaki arrayimize ekleyen fonksiyon
    ascii_to_binary(array,size,bits);
    
    bits_size = sizeof(bits) / sizeof(bits[0]);
    display(bits,bits_size);

}

