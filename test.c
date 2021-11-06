int mx_strcmp(const char *s1, const char *s2, const char *s3) {
    while (*s1) {
        if (*s1 != *s2) {
            break;
        }
        s1++;
        s2++;
        s3++;
    }
    return *s1 - *s2;
}
/* this function needs to be defined */
