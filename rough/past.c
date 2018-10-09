#include <stdio.h>

#include <stdlib.h>

#include <pwd.h>

#include <shadow.h>

#include <sys/types.h>

#include <unistd.h>

int main(int c, char *v[]) 
{

	if ( c < 3 ) {

		printf("usage: <%s> <username> <password>\n" , v[0]);
	
		return 1 ;
	}

    char password[100] = "";
    
	struct spwd *shadow_entry;
    
	char *p, *correct, *supplied, *salt;
   
	shadow_entry = getspnam(v[1]);

	if ( ! shadow_entry ) {

			printf("double check user name\n");
		
			return 1 ;

	}

	strcpy ( password , v[2] ) ;
    
	correct = shadow_entry->sp_pwdp;

	puts(correct);

	salt = strdup(correct);
	
    p = strchr(salt + 1, '$');

	if (p == NULL) return 2;
    
	p = strchr(p + 1, '$');
    
	if (p == NULL) return 2;
    
	p[1] = 0;

	supplied = crypt(password, salt);
    
	if (supplied == NULL) return 2;

	puts(supplied);
    
//	if ( !strcmp(supplied, correct)) return printf("correct\n");
	
//	printf("wrong password\n");
}
