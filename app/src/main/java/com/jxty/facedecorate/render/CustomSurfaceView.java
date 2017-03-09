package com.jxty.facedecorate.render;

import android.content.Context;
import android.graphics.Canvas;
import android.opengl.GLSurfaceView;
import android.view.Surface;
import android.view.SurfaceHolder;
import android.view.SurfaceView;

import com.jxty.facedecorate.MainActivity;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

/**
 * Created by admin on 2017/3/8 0008.
 */

public class CustomSurfaceView implements GLSurfaceView.Renderer {

    @Override
    public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        MainActivity.nativeStartRender();
    }

    @Override
    public void onSurfaceChanged(GL10 gl, int width, int height) {
        MainActivity.nativeSurfaceChanged(width,height);
    }

    @Override
    public void onDrawFrame(GL10 gl) {
        MainActivity.nativeDrawFrame();
    }
}
