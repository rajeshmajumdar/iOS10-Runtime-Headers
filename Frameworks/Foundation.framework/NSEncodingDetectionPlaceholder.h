/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSEncodingDetectionPlaceholder : NSObject {
    char * bytes;
    unsigned long  bytesLength;
    char * bytesStart;
    unsigned long  cfEncoding;
    unsigned int  nsEncoding;
    NSString * string;
}

@property (readonly) char *bytes;
@property (readonly) unsigned long bytesLength;
@property (readonly) unsigned long cfEncoding;
@property (readonly) unsigned int nsEncoding;
@property (readonly) NSString *string;

+ (id)placeholderForDetector:(id)arg1;

- (char *)bytes;
- (unsigned long)bytesLength;
- (unsigned long)cfEncoding;
- (void)dealloc;
- (id)debugDescription;
- (void)finalize;
- (unsigned int)nsEncoding;
- (id)string;

@end
