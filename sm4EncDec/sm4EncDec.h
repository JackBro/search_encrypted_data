#ifndef SM4ENCDEC_H_INCLUDED
#define SM4ENCDEC_H_INCLUDED

/*
���ܣ�����PlainText��ָ����
��ڣ�
char *PlainText    ��Ҫ���ܵ�����
���ڣ�
int *outLen        ���ܺ����ݵĳ���
���أ�
char *             ���ܺ������
*/
unsigned char *encrypt(unsigned char *PlainText, int inLen, int *outLen);

/*
���ܣ�����CipherText��ָ����
��ڣ�
char *CipherText   ��Ҫ���ܵ�����
int TextLen        �������ݵĳ���
���أ�
char *             ���ܺ������
*/
unsigned char *decrypt(unsigned char *CipherText,int textLen,int *OutLen);



#endif // SM4ENCDEC_H_INCLUDED
