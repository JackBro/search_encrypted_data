#include "StrHex.h"
#include <ctype.h>
#include <stdlib.h>

/*
���ܣ���ʮ����������ת�����ַ�����ʽ
��ڣ�
unsigned char *hex  ʮ����������
int len             ʮ���������ݵĳ���
���أ�
char *              ת������ַ���
��ע��ת������ַ���������ʮ���������ݳ��ȵ�2��
*/
char *hex2str(unsigned char *hex,int len)
{
    int i;
    char dec2hex[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    char *str = (char*)malloc(2*len*sizeof(unsigned char));
    for(i=0;i<len;i++)
    {
        str[2*i] = dec2hex[hex[i]>>4];
        str[2*i+1] = dec2hex[hex[i]&0xF];
    }
    return str;
}

/*
���ܣ����ַ�����ʽ��ʮ����������ת����ʮ������
��ڣ�
char *str           �ַ�����ʽ��ʮ����������
int len             �ַ�����ʽ��ʮ���������ݵĳ���
���أ�
char *              ת�����ʮ����������
��ע���ú���ֻ��ת����hex2str�������ɵ��ַ�����ʽ��ʮ���������ݣ���Ϊ10���ϵ����ݶ�����Сд��ĸ��ʾ��
*/
unsigned char *str2hex(char *str,int len)
{
    int i;
    unsigned char *hex = (unsigned char*)malloc((len/2)*sizeof(unsigned char));

    for(i=0;i<len/2;i++)
    {
        if(isdigit(str[2*i]))
        {
            hex[i] = (str[2*i]-48)<<4;
        }
        else{
            hex[i] = (str[2*i]-97+10)<<4;
        }

        if(isdigit(str[2*i+1]))
        {
            hex[i]|= (str[2*i+1]-48)&0xF;
        }
        else{
            hex[i] |= (str[2*i+1]-97+10)&0xF;
        }
    }
    return hex;
}

