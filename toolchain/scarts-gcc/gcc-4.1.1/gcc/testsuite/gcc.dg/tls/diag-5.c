/* __thread specifiers on empty declarations.  */
/* { dg-require-effective-target tls } */

__thread struct foo; /* { dg-warning "warning: useless '__thread' in empty declaration" } */
