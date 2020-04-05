
char* ft_strcpy (char *s1, char *s2) {
    int i = 0;
    while (s1[i]) {
        s2[i] = s1[i];
        i += 1;
    }
    s2[i] = '\0';
    return s2;
}

int main (void) {
    char s1[] = "cleber alberto cabral\0";
    char s2[] = "\0";
    ft_strcpy(s1, s2);
    return 0;
}