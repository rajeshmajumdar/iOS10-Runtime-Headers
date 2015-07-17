/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLResponse : NSObject <NSCopying, NSSecureCoding> {
    NSURLResponseInternal * _internal;
}

@property (readonly, copy) NSString *MIMEType;
@property (readonly, copy) NSURL *URL;
@property (readonly) long long expectedContentLength;
@property (nonatomic, readonly) BOOL ssv_isExpiredResponse;
@property (readonly, copy) NSString *suggestedFilename;
@property (readonly, copy) NSString *textEncodingName;
@property (readonly) BOOL tsu_isHTTPSuccess;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)_responseWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
+ (id)getObjectKeyWithIndex:(long)arg1;
+ (BOOL)supportsSecureCoding;

- (id)MIMEType;
- (id)URL;
- (struct _CFURLResponse { }*)_CFURLResponse;
- (double)_calculatedExpiration;
- (double)_freshnessLifetime;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (id)_lastModifiedDate;
- (BOOL)_mustRevalidate;
- (id)_peerCertificateChain;
- (void)_setExpectedContentLength:(long long)arg1;
- (void)_setMIMEType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedContentLength;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(int)arg3 textEncodingName:(id)arg4;
- (id)suggestedFilename;
- (id)textEncodingName;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

- (id)_cacheTime;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)ssv_isExpiredResponse;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

- (id)webui_certificateChain;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (id)allHeaderFields;
- (long long)maxExpectedContentLength;
- (int)statusCode;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (BOOL)tsu_isHTTPSuccess;

@end
