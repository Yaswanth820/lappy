package com.example.examplerv;

import android.view.ViewGroup;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;


public class MyAdapter extends RecyclerView.Adapter<MyAdapter.Holdview> {

    @NonNull
    @Override
    public Holdview onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        return null;
    }

    @Override
    public void onBindViewHolder(@NonNull Holdview holder, int position) {

    }

    @Override
    public int getItemCount() {
        return 0;
    }

    public class Holdview extends RecyclerView.ViewHolder {
        
    }
}
