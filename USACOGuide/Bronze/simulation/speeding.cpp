#include <algorithm>
#include <vector>
#include <cstdio>
#include <iostream>

int max_over_speed = 0;
int road_length = 100;

int main() {
    int N, M;
    scanf("%d%d", &N, &M);
    int road_lengths[N], speed_limits[N], driven_lengths[M], driven_speeds[M];

    int start = 0;
    std::vector<int> limit(road_length);
    for (int i=0; i<N; ++i) {
        int ln, lm;
        scanf("%d%d", &ln, &lm);

        for (int i=0; i<start+ln; i++) {
            limit[i] = lm;
        }
        start += ln;
    }

    start = 0;
    std::vector<int> bessie(road_length);
    for (int i=0; i<M; ++i) {
        int ln, lm;
        std::cin >> ln >> lm;
        for (int i=0; i<start+ln; i++) {
            bessie[i] = lm;
        }
        start += ln;
    }

    int worst = 0;
    for (int i=0; i<road_length; i++) {
        worst = std::max(worst, bessie[i] - limit[i]);
    }

    std::cout << worst << "\n";
}