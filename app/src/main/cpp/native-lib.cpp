#include <jni.h>
#include <string>

extern "C"
{
jstring Java_com_jxty_facedecorate_MainActivity_stringFromJNI(JNIEnv* env, jobject /* this */)
{
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT void JNICALL Java_com_jxty_facedecorate_CustomSurfaceView_nativeStartRender(
        JNIEnv *env, jclass type)
{

}

JNIEXPORT void JNICALL Java_com_jxty_facedecorate_CustomSurfaceView_nativeSurfaceChanged(
        JNIEnv *env, jclass type, jobject surface)
{

}

JNIEXPORT void JNICALL Java_com_jxty_facedecorate_CustomSurfaceView_nativeSurfaceDestroyed(JNIEnv *env, jclass type)
{

}

JNIEXPORT void JNICALL Java_com_jxty_facedecorate_CustomSurfaceView_nativeRequestRender(JNIEnv *env, jclass type)
{

}
}
