
void print_key ( unsigned char scancode ) 
{

#if 1

switch( scancode ) {

                case 0x10 :
                case 0x10 + 0x80:
                        printf (" ****  Q  ****\n");
                        break ;
                case 0x11 :
                case 0x11 + 0x80:
                        printf (" ****  W  ****\n");
                        break ;
                case 0x12 :
                case 0x12 + 0x80:
                        printf (" ****  E  ****\n");
                        break ;
                case 0x13 :
                case 0x13 + 0x80:
                        printf (" ****  R  ****\n");
                        break ;
                case 0x14 :
                case 0x14 + 0x80:
                        printf (" ****  T  ****\n");
                        break ;
                case 0x15 :
                case 0x15 + 0x80:
                        printf (" ****  Y  ****\n");
                        break ;
                case 0x16 :
                case 0x16 + 0x80:
                        printf (" ****  U  ****\n");
                        break ;
                case 0x17 :
                case 0x17 + 0x80:
                        printf (" ****  I  ****\n");
                        break ;
                case 0x18 :
                case 0x18 + 0x80:
                        printf (" ****  O  ****\n");
                        break ;
                /*case 0x20 :
                case 0x20 + 0x80:
                        printf (" ****  { or [  ****\n");
                        break ;*/
                case 0x19 :
                case 0x19 + 0x80:
                        printf (" ****  P  ****\n");
                        break ;
                /*case 0x21 :
                case 0x21 + 0x80:
                        printf (" ****  } or ]  ****\n");
                        break ;
                case 0x22 :
                case 0x22 + 0x80:
                        printf (" ****  | or \\  ****\n");
                        break ;*/
                case 0x1e :
                case 0x1e + 0x80:
                        printf (" ****  A  ****\n");
                        break ;
                case 0x1f :
                case 0x1f + 0x80:
                        printf (" ****  S  ****\n");
                        break ;
                case 0x20 :
                case 0x20 + 0x80:
                        printf (" ****  D  ****\n");
                        break ;
                case 0x21 :
                case 0x21 + 0x80:
                        printf (" ****  F  ****\n");
                        break ;
                case 0x22 :
                case 0x22 + 0x80:
                        printf (" ****  G  ****\n");
                        break ;
                case 0x23 :
                case 0x23 + 0x80:
                        printf (" ****  H  ****\n");
                        break ;
                case 0x24 :
                case 0x24 + 0x80:
                        printf (" ****  J  ****\n");
                        break ;
                case 0x25 :
                case 0x25 + 0x80:
                        printf (" ****  K  ****\n");
                        break ;
                case 0x26 :
                case 0x26 + 0x80:
                        printf (" ****  L  ****\n");
                        break ;
                case 0x27 :
                case 0x27 + 0x80:
                        printf (" ****  : or ;  ****\n");
                        break ;
                case 0x28 :
                case 0x28 + 0x80:
                        printf (" ****  \" or '  ****\n");
                        break ;
                case 0x2d :
                case 0x2d + 0x80:
                        printf (" ****  X  ****\n");
                        break ;
                case 0x2e :
                case 0x2e + 0x80:
                        printf (" ****  C  ****\n");
                        break ;
                case 0x2f :
                case 0x2f + 0x80:
                        printf (" ****  V  ****\n");
                        break ;
                case 0x30 :
                case 0x30 + 0x80:
                        printf (" ****  B  ****\n");
                        break ;
                case 0x31 :
                case 0x31 + 0x80:
                        printf (" ****  N  ****\n");
                        break ;
                case 0x32 :
                case 0x32 + 0x80:
                        printf (" ****  M  ****\n");
                        break ;
                case 0x33 :
                case 0x33 + 0x80:
                        printf (" ****  < or ,  ****\n");
                        break ;
                case 0x34 :
                case 0x34 + 0x80:
                        printf (" ****  > or .  ****\n");
                        break ;
                case 0x35 :
                case 0x35 + 0x80:
                        printf (" ****  ? or /  ****\n");
                        break ;
                case 2 :
                case 2 + 0x80:
                        printf (" ****  1  ****\n");
                        break ;
                case 3 :
                case 3 + 0x80:
                        printf (" ****  2  ****\n");
                        break ;
                case 4 :
                case 4 + 0x80:
                        printf (" ****  3  ****\n");
                        break ;
                case 5 :
                case 5 + 0x80:
                        printf (" ****  4  ****\n");
                        break ;
                case 6 :
                case 6 + 0x80:
                        printf (" ****  5  ****\n");
                        break ;
                case 7 :
                case 7 + 0x80:
                        printf (" ****  6  ****\n");
                        break ;
                case 8 :
                case 8 + 0x80:
                        printf (" ****  7  ****\n");
                        break ;
                case 9 :
                case 9 + 0x80:
                        printf (" ****  8  ****\n");
                        break ;
                case 10 :
                case 10 + 0x80:
                        printf (" ****  9  ****\n");
                        break ;
                case 11 :
                case 11 + 0x80:
                        printf (" ****  0  ****\n");
                        break ;
                case 12 :
                case 12 + 0x80:
                        printf (" ****  - or _  ****\n");
                        break ;
                case 13 :
                case 13 + 0x80:
                        printf (" ****  = or +  ****\n");
                        break ;
                case 14 :
                case 14 + 0x80:
                        printf (" ****  backspace  ****\n");
                        break ;
                case 0x39 :
                case 0x39 + 0x80:
                        printf (" ****  space  ****\n");
                        break ;
                case 0x2a :
		case 0x36:
		case 0x36 + 0x80 :
                case 0x2a + 0x80:
                        printf (" ****  shift  ****\n");
                        break ;
                case 0x1d :
                case 0x1d + 0x80:
                        printf (" ****  ctrl  ****\n");
                        break ;
                case 0xf :
                case 0xf + 0x80:
                        printf (" ****  tab  ****\n");
                        break ;
                case 0x1c :
                case 0x1c + 0x80:
                        printf (" ****  enter  ****\n");
                        break ;
                case 0x1 :
                case 0x1 + 0x80:
                        printf (" ****  ESC  ****\n");
                        break ;
                case 0x38 :
		case 0xe0:
                case 0x38 + 0x80:
                        printf (" ****  alt  ****\n");
                        break ;
		case 0x3b:
                case 0x3b + 0x80:
                        printf (" ****  f1  ****\n");
                        break ;
		case 0x3c:
                case 0x3c + 0x80:
                        printf (" ****  f2  ****\n");
                        break ;
		case 0x3d:
                case 0x3d + 0x80:
                        printf (" ****  f3  ****\n");
                        break ;
		case 0x3e:
                case 0x3e + 0x80:
                        printf (" ****  f4  ****\n");
                        break ;
		case 0x3f:
                case 0x3f + 0x80:
                        printf (" ****  f5  ****\n");
                        break ;
		case 0x40:
                case 0x40 + 0x80:
                        printf (" ****  f6  ****\n");
                        break ;
		case 0x41:
                case 0x41 + 0x80:
                        printf (" ****  f7  ****\n");
                        break ;
		case 0x42:
                case 0x42 + 0x80:
                        printf (" ****  f8  ****\n");
                        break ;
		case 0x43:
                case 0x43 + 0x80:
                        printf (" ****  f9  ****\n");
                        break ;
		case 0x44:
                case 0x44 + 0x80:
                        printf (" ****  f10  ****\n");
                        break ;
		case 0x57:
                case 0x57 + 0x80:
                        printf (" ****  f11  ****\n");
                        break ;
		case 0x58:
                case 0x58 + 0x80:
                        printf (" ****  f12  ****\n");
                        break ;

                default:

                        printf("alien key for now\n");
                        break ;

                }
#endif
}
