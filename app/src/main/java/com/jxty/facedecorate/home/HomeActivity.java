package com.jxty.facedecorate.home;

import android.os.Bundle;

import com.jxty.facedecorate.BaseActivity;
import com.jxty.facedecorate.R;


/**
 * Created by admin on 2017/3/8 0008.
 */

public class HomeActivity extends BaseActivity implements HomeContract.View{

    private HomePrecenter mPrecenter = null;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.layout_home);
    }

    @Override
    public void createPrecenter() {
        mPrecenter = new HomePrecenter(this);
    }

    @Override
    public void initView() {

    }
}
