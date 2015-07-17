/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBProperties : NSObject {
    id  _plist;
    BOOL  _protect;
    BOOL  _protected;
}

@property (nonatomic, retain) NSString *activeAppleID;
@property (nonatomic, readonly) NSDictionary *appleIDs;
@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, readonly) NSDictionary *containers;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSString *deviceName;
@property (getter=isEncrypted, nonatomic) BOOL encrypted;
@property (nonatomic, readonly) BOOL hasCorruptSQLiteDBs;
@property (nonatomic, retain) NSData *keybagData;
@property (nonatomic, retain) NSDictionary *lockdownKeys;
@property (getter=wasPasscodeSet, nonatomic) BOOL passcodeSet;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) id propertyList;
@property (getter=isProtected, nonatomic) BOOL protected;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic) double systemDomainsVersion;
@property (nonatomic) double version;

+ (id)properties;
+ (id)propertiesWithFile:(id)arg1 error:(id*)arg2;

- (BOOL)_boolForKey:(id)arg1;
- (id)_dataForKey:(id)arg1;
- (id)_dictionaryForKey:(id)arg1;
- (void)_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_setData:(id)arg1 forKey:(id)arg2;
- (void)_setDictionary:(id)arg1 forKey:(id)arg2;
- (id)_stringForLockdownKey:(id)arg1;
- (id)activeAppleID;
- (void)addAppleIDsFromSet:(id)arg1;
- (void)addContainer:(id)arg1;
- (void)addContainersFromArray:(id)arg1;
- (id)appleIDs;
- (id)buildVersion;
- (id)containerWithIdentifier:(id)arg1;
- (id)containers;
- (id)dataWithError:(id*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)deviceID;
- (id)deviceName;
- (BOOL)hasCorruptSQLiteDBs;
- (id)init;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithFile:(id)arg1 error:(id*)arg2;
- (BOOL)isEncrypted;
- (BOOL)isProtected;
- (id)keybagData;
- (id)lockdownKeys;
- (id)objectForKey:(id)arg1;
- (id)productType;
- (id)propertyList;
- (void)removeObjectForKey:(id)arg1;
- (id)serialNumber;
- (void)setActiveAppleID:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setEncrypted:(BOOL)arg1;
- (void)setKeybagData:(id)arg1;
- (void)setLockdownKeys:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPasscodeSet:(BOOL)arg1;
- (void)setProtected:(BOOL)arg1;
- (void)setSystemDomainsVersion:(double)arg1;
- (void)setVersion:(double)arg1;
- (double)systemDomainsVersion;
- (double)version;
- (BOOL)wasPasscodeSet;
- (BOOL)writeToFile:(id)arg1 error:(id*)arg2;

@end
