
char *ft_strrev(char *str) {
    int i, aux = 0;
    char tmp;
    while (str[i]) i++;
    while (aux < --i) {
        tmp = str[aux];
        str[aux] = str[i];
        str[i] = tmp;
        aux++;
    }
    return str;
}