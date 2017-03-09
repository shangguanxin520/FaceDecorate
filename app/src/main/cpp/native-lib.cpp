#include <jni.h>
#include <string>
#include <GLES/gl.h>
#include "log/LogUtils.h"

extern "C"
{
unsigned int vbo[2];
float positions[12] = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
short indices  [4]  = {0,1,2,3};

jstring Java_com_jxty_facedecorate_MainActivity_stringFromJNI(JNIEnv* env, jobject /* this */)
{
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT void JNICALL Java_com_jxty_facedecorate_MainActivity_nativeStartRender(
        JNIEnv *env, jclass type)
{
//    //生成两个缓存区对象
//    glGenBuffers (2, vbo);
//    //绑定第一个缓存对象
//    glBindBuffer (GL_ARRAY_BUFFER, vbo[0]);
//    //创建和初始化第一个缓存区对象的数据
//    glBufferData (GL_ARRAY_BUFFER, 4*12, positions, GL_STATIC_DRAW);
//    //绑定第二个缓存对象
//    glBindBuffer (GL_ELEMENT_ARRAY_BUFFER, vbo[1]);
//    //创建和初始化第二个缓存区对象的数据
//    glBufferData (GL_ELEMENT_ARRAY_BUFFER, 2*4, indices, GL_STATIC_DRAW);
//    printf("jincall nativeStartRender");
    LogUtils::getInstance()->printD("nativeStartRender");
}

JNIEXPORT void JNICALL Java_com_jxty_facedecorate_MainActivity_nativeSurfaceChanged(
        JNIEnv *env,jobject jobj,jint width,jint height)
{
    LogUtils::getInstance()->printD("nativeSurfaceChanged");
    //    //图形最终显示到屏幕的区域的位置、长和宽
//    glViewport (0,0,width,height);
//    //指定矩阵
//    glMatrixMode(GL_PROJECTION);
//    //将当前的矩阵设置为glMatrixMode指定的矩阵
//    glLoadIdentity ();
//    glOrthof(-2, 2, -2, 2, -2, 2);
}

JNIEXPORT void JNICALL Java_com_jxty_facedecorate_MainActivity_nativeDrawFrame(JNIEnv *env,jobject obj)
{
//    //启用顶点设置功能，之后必须要关闭功能
//    glEnableClientState (GL_VERTEX_ARRAY);
//    //清屏
//    glClearColor (0,0,1,1);
//    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    glMatrixMode (GL_MODELVIEW);
//    glLoadIdentity ();
//    glBindBuffer    (GL_ARRAY_BUFFER, vbo[0]);
//    //定义顶点坐标
//    glVertexPointer (3, GL_FLOAT, 0, 0);
//    glBindBuffer    (GL_ELEMENT_ARRAY_BUFFER, vbo[1]);
//    //按照参数给定的值绘制图形
//    glDrawElements  (GL_TRIANGLE_STRIP, 4, GL_UNSIGNED_SHORT, 0);
//    //关闭顶点设置功能
//    glDisableClientState(GL_VERTEX_ARRAY);
    LogUtils::getInstance()->printD("nativeDrawFrame");
}
}
