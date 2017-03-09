//
// Created by admin on 2017/3/8 0008.
//

#include "LogUtils.h"

LogUtils* LogUtils::mInstalnce = nullptr;

void LogUtils::printD(const char *str)
{
    __android_log_print(ANDROID_LOG_DEBUG,this->tag,"%s",str);
}

void LogUtils::printE(const char *str)
{
    __android_log_print(ANDROID_LOG_ERROR,this->tag,"%s",str);
}
