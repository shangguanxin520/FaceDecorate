package com.jxty.facedecorate;

import android.opengl.GLSurfaceView;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Surface;
import android.widget.TextView;

import com.jxty.facedecorate.render.CustomSurfaceView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
//        GLSurfaceView surfaceView = new GLSurfaceView(this);
//        surfaceView.setRenderer(new CustomSurfaceView());
//        setContentView(surfaceView);
    // Example of a call to a native method
//    TextView tv = (TextView) findViewById(R.id.sample_text);
//    tv.setText(stringFromJNI());
        nativeStartRender();
        nativeDrawFrame();
        nativeSurfaceChanged(10,110);
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
    public native static void nativeStartRender();
    public native static void nativeSurfaceChanged(int width,int weight);
    public native static void nativeDrawFrame();
    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }
}
