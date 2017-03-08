package com.kaiser.test.facedocor.utils;

import android.app.Activity;
import android.content.Intent;

/**
 * Created by admin on 2017/3/8 0008.
 */

public class Utils {

    private static Utils mUtils = null;

    private Utils(){

    }

    public static Utils getInstance(){
        if ( mUtils == null ){
            mUtils = new Utils();
        }
        return mUtils;
    }

    public void gotoActivity(Activity source,Class target){
        Intent intent = new Intent(source,target);
        source.startActivity(intent);
    }
}
