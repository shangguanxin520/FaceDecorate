//
// Created by admin on 2017/3/8 0008.
//

#ifndef FACEDECORATE_OPENGLJNI_H
#define FACEDECORATE_OPENGLJNI_H

#include <android/log.h>

class LogUtils {
private:
    LogUtils()
    {

    }
    static LogUtils* mInstalnce;
    const char* tag = "----------------__________-------------";

public:
    static LogUtils* getInstance()
    {
        if( mInstalnce == nullptr )
        {
            mInstalnce = new LogUtils();
        }
        return mInstalnce;
    }

    void printD(const char* str);
    void printE(const char* str);
};


#endif //FACEDECORATE_OPENGLJNI_H
