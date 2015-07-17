/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKPickerItem : NSObject <NSSecureCoding> {
    WKImage * _accessoryImage;
    NSString * _caption;
    WKImage * _contentImage;
    NSString * _title;
}

@property (nonatomic, copy) WKImage *accessoryImage;
@property (nonatomic, copy) NSString *caption;
@property (nonatomic, copy) WKImage *contentImage;
@property (nonatomic, copy) NSString *title;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryImage;
- (id)caption;
- (id)contentImage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAccessoryImage:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setContentImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
