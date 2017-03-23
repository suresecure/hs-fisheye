#pragma  once
//���ͬʱ�����ͨ����
#define  NUM_CHANNEL   32

//����չ����ģʽ
typedef enum
{
	EXPAND_360,  //360չ��
	EXPAND_LNGLAT //��γ��չ��
}ExpandMode;

//�ӿڷ�����
#define  FED_SUCESS												0   //�ɹ�
#define  FED_ERR_CHANNEL_NOT_INIT					-1  //����ͨ��δ��ʼ��
#define  FED_ERR_CHANNEL_NUM_OVER_BOUND	-2  //����ͨ����Խ��
#define  FED_ERR_PARAM											-3  //����������Ҫ��
#define  FED_ERR_UNKNOW_VIDEO_FORMAT          -4  //δ֪����Ƶͼ���ʽ

extern "C"
{
int HY_FED_Expand(int channel, unsigned char* pRGB, int width, int height, unsigned char* &pResult, int* wRst, int* hRst, int ExpandType);
int HY_FED_GetProjectionPoint(int chn, int x, int y, int inw, int inh, int* outx, int* outy, int* outw, int* outh);
}

