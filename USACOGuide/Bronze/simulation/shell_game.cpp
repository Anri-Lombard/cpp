#include <cstdio>
#include <algorithm>

int N, shell_pos[3], counter[3];

int main() {
    scanf("%d", &N);

    for(int i=0; i<3; i++) {
        shell_pos[i] = i;
    }

    for(int i=0; i<N; i++) {
        int a, b, g;
        --a, --b, --g;
        scanf("%d%d%d", &a, &b, &g);
        std::swap(shell_pos[a], shell_pos[b]);
        ++counter[shell_pos[g]];
    }

    printf("%d\n", std::max({counter[0], counter[1], counter[2]}));
    return 0;
}