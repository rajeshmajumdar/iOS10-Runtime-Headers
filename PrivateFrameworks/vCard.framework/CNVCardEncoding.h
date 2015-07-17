/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardEncoding : NSObject {
    NSString * _name;
    unsigned int  _stringEncoding;
}

@property (readonly) NSString *name;
@property (readonly) unsigned int stringEncoding;

+ (id)addPreferredEncoding:(id)arg1 toEncodings:(id)arg2;
+ (id)asciiEncoding;
+ (id)encodingWithName:(id)arg1 stringEncoding:(unsigned int)arg2;
+ (id)encodingsFromUserDefaults;
+ (id)isoLatin1Encoding;
+ (id)macRomanEncoding;
+ (id)preferredEncodingInUserDefaults;
+ (id)standardEncodings;
+ (id)utf8Encoding;

- (id)initWithName:(id)arg1 stringEncoding:(unsigned int)arg2;
- (id)name;
- (unsigned int)stringEncoding;

@end
