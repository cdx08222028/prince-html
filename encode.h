// Copyright (C) 2011-2012 YesLogic Pty. Ltd.
// Released as Open Source (see COPYING.txt for details)


#define CAPITAL_M 0x4D
#define	SMALL_M 0x6D
#define CAPITAL_E 0x45
#define SMALL_E 0x65
#define CAPITAL_T 0x54
#define SMALL_T 0x74


/*file_name is the input file.
  returns a string representing the character encoding, or NULL if no character encoding can be found.
  the returned string should be freed after use.*/
unsigned char *get_file_encoding(unsigned char *file_name);

/*returns a string representing the character encoding, or NULL if no character encoding can be found.
  the returned string should be freed after use.*/
unsigned char *get_encoding(unsigned char *file_buffer, long buffer_length);


/*returns 1 if encoding is utf-8, 0 if encoding is not utf-8*/
int check_utf8_encoding(unsigned char *file_buffer, long buffer_length);


/*returns -1 if file cannot be read into buffer, 1 if encoding is verified to be utf-8, 0 otherwise*/
int check_file_utf8_encoding(unsigned char *file_name);


/*returns the buffer containing the verified, correct version of the UTF-8 encoded file*/
unsigned char *verify_utf8_encoding(unsigned char *file_buffer, long buf_len, long *out_buf_len);


/*returns the buffer containing the verified, correct version of the UTF-8 encoded file,
  returns NULL if the file cannot be read into the  buffer.*/
unsigned char *verify_file_utf8_encoding(unsigned char *file_name, long *out_buf_len);