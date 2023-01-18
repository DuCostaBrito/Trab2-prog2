#include "audio.h"

void audio_init()
{
    al_install_audio();
    al_init_acodec_addon();
    al_reserve_samples(128);

    sample_bg[0] = al_load_sample("./resources/music/monkey_drama.mp3");
    must_init(sample_bg[0], "background 1 sample");

    sample_bg[1] = al_load_sample("./resources/music/monkey_island.mp3");
    must_init(sample_bg[1], "background 2 sample");

    sample_clear = al_load_sample("./resources/sounds/clear.mp3");
    must_init(sample_clear, "clear sample");

    sample_wrong_play = al_load_sample("./resources/sounds/wrong_move.mp3");
    must_init(sample_clear, "wrong play sample");

    sample_mult[0] = al_load_sample("./resources/sounds/multi_2.mp3");
    must_init(sample_mult[0], "sample_mult[0] sample");
    sample_mult[1] = al_load_sample("./resources/sounds/multi_3.mp3");
    must_init(sample_mult[1], "sample_mult[1] sample");
    sample_mult[2] = al_load_sample("./resources/sounds/multi_4.mp3");
    must_init(sample_mult[2], "sample_mult[2] sample");
    sample_mult[3] = al_load_sample("./resources/sounds/multi_5.mp3");
    must_init(sample_mult[3], "sample_mult[3] sample");
    sample_mult[4] = al_load_sample("./resources/sounds/multi_6.mp3");
    must_init(sample_mult[4], "sample_mult[4] sample");

}

void audio_deinit()
{
    al_destroy_sample(sample_bg[0]);
    al_destroy_sample(sample_bg[1]);
    al_destroy_sample(sample_clear);
    al_destroy_sample(sample_wrong_play);
    al_destroy_sample(sample_mult[0]);
    al_destroy_sample(sample_mult[1]);
    al_destroy_sample(sample_mult[2]);
    al_destroy_sample(sample_mult[3]);
    al_destroy_sample(sample_mult[4]);
}