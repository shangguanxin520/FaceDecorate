package com.jxty.facedecorate.render;

import android.content.Context;
import android.view.Surface;
import android.view.SurfaceHolder;
import android.view.SurfaceView;

/**
 * Created by admin on 2017/3/8 0008.
 */

public class CustomSurfaceView extends SurfaceView implements SurfaceHolder.Callback {

    private static native void nativeSurfaceChanged(Surface surface);
    private static native void nativeSurfaceDestroyed();
    private static native void nativeStartRender();
    private static native void nativeRequestRender();

    public CustomSurfaceView(Context context){
        super(context);
    }

    @Override
    public void surfaceCreated(SurfaceHolder holder) {

    }

    @Override
    public void surfaceChanged(SurfaceHolder holder, int format, int width, int height) {

    }

    @Override
    public void surfaceDestroyed(SurfaceHolder holder) {

    }
}
