int sgs_clib_strncmp(const char *str1, const char *str2, int p)
{

    int n = p / sizeof(char);
    int m = 0;
    for (int i = 0; i < n; i++)
    {

        if (*(str1 + i) == *(str2 + i))
        {
            continue;
        }
        else
        {

            m = 1;
            break;
        }
    }

    return m;
}