package com.exercicios.projects.techined.mediaplayer;

import android.media.Image;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.media.MediaPlayer;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.ImageButton;

public class MediaPlayerActivity extends AppCompatActivity {

    private MediaPlayer musicMediaPlayer;
    private ImageButton button;
    private int duracao;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_media_player);
        button = (ImageButton) findViewById(R.id.playButton);
        musicMediaPlayer = MediaPlayer.create(this, R.raw.teste);

        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View vone) {
                musicMediaPlayer.start();

            }
        });
        }

    @Override
    protected void onPause() {
        super.onPause();
        musicMediaPlayer.pause();
        duracao = musicMediaPlayer.getCurrentPosition();

    }

    @Override
    protected void onRestart() {
        super.onRestart();
        Log.e("Musica","Entrou Aqui!");
        musicMediaPlayer.start();
        musicMediaPlayer.seekTo(duracao);
    }


}
