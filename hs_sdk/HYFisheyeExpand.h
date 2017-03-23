#pragma  once
//最大同时处理的通道数
#define  NUM_CHANNEL   32

//鱼眼展开的模式
typedef enum
{
	EXPAND_360,  //360展开
	EXPAND_LNGLAT //经纬度展开
}ExpandMode;

//接口返回码
#define  FED_SUCESS												0   //成功
#define  FED_ERR_CHANNEL_NOT_INIT					-1  //处理通道未初始化
#define  FED_ERR_CHANNEL_NUM_OVER_BOUND	-2  //处理通道号越界
#define  FED_ERR_PARAM											-3  //参数不符合要求
#define  FED_ERR_UNKNOW_VIDEO_FORMAT          -4  //未知的视频图像格式

extern "C"
{
int HY_FED_Expand(int channel, unsigned char* pRGB, int width, int height, unsigned char* &pResult, int* wRst, int* hRst, int ExpandType);
int HY_FED_GetProjectionPoint(int chn, int x, int y, int inw, int inh, int* outx, int* outy, int* outw, int* outh);
}

