#include <pthread.h>

void *input_thread(void *arg) {
    // ...
}

void start_input_thread() {
    pthread_t tid;
    pthread_create(&tid, NULL, input_thread, NULL);
    pthread_detach(tid);
}