#include <algorithm>
#include <cstdio>

int max_over_speed = 0;
int road_length = 100;

int main() {
    int N, M;
    scanf("%d%d", &N, &M);
    int road_lengths[N], speed_limits[N], driven_lengths[M], driven_speeds[M];

    for (int i=0; i<N; ++i) {
        int ln, lm;
        scanf("%d%d", &ln, &lm);

        road_length[i] = ln;
        speed_limits[i] = lm;
    }
}