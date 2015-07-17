/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGName : SGObject {
    NSString * _firstName;
    NSString * _fullName;
    NSString * _lastName;
    NSString * _middleName;
    NSString * _prefix;
    NSString * _suffix;
}

@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *middleName;
@property (nonatomic, readonly) NSString *prefix;
@property (nonatomic, readonly) NSString *suffix;

+ (id)nameWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 withRecordId:(id)arg7 origin:(id)arg8;
+ (id)nameWithFirstName:(id)arg1 lastName:(id)arg2 withRecordId:(id)arg3 origin:(id)arg4;
+ (id)nameWithFirstName:(id)arg1 withRecordId:(id)arg2 origin:(id)arg3;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)fullName;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 recordId:(id)arg7 origin:(id)arg8;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToName:(id)arg1;
- (id)lastName;
- (id)middleName;
- (id)name;
- (id)prefix;
- (id)suffix;

@end
