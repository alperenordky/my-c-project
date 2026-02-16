char	*ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == (char)c)
        {
            return ((char *)&s[i]);
        }
        i++;
    }
    if(s[i] == (char)c)
    {
        return(( char*)&s[i]);
    }
    return(0);
}

//Meali: C dilinde stringlerin bittiğini gösteren gizli bir \0 (NULL karakteri) vardır. Metin diyor ki: "Biz bu bitiş karakterini de stringin bir parçası sayıyoruz."
//Yani; eğer kullanıcı senden stringin içinde \0 karakterini aramanı isterse, sakın NULL (bulunamadı) döndürme! Stringin bittiği yerin adresini döndür.ft_sr