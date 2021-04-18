package com.example.examplerv;

import retrofit2.Call;
import retrofit2.http.GET;

public interface MyInterface {
    @GET("top-headlines?sources=bbc-news&apiKey=2f68ba63a76e46ed9d319d9beb5fe080")
    Call<String> value();

}
