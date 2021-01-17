int sys(char s[]) {
    int i;
    for (i = 0;; i++)
        if (s[i] == 0)
            break;
    int j, k;
    for (j = 0, k = i - 1; j < i / 2; j++, k--)
        if (s[j] != s[k])
            return 0;
    return 1;

}

int main() {
    printf("%d\n", 1 == sys("a"));
    printf("%d\n", 0 == sys("1234312"));
    printf("%d\n", 1 == sys("aba"));
    printf("%d\n", 1 == sys(""));
}
