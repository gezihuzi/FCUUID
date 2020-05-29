//
//  FCUUID.h
//
//  Created by Fabio Caccamo on 26/06/14.
//  Copyright © 2016 Fabio Caccamo. All rights reserved.
//

#import <Foundation/Foundation.h>

#if (TARGET_OS_IOS)
#import <UIKit/UIKit.h>
#endif

#if (TARGET_OS_MACOS)
#import <AppKit/AppKit.h>
#endif

extern NSString *const FCUUIDsOfUserDevicesDidChangeNotification;

@interface FCUUID : NSObject
{
    NSMutableDictionary *_uuidForKey;
    NSString *_uuidForSession;
    NSString *_uuidForInstallation;
    NSString *_uuidForDevice;
    NSString *_uuidsOfUserDevices;
    BOOL _uuidsOfUserDevices_iCloudAvailable;
}

+(NSString *)uuid;
+(NSString *)uuidForKey:(id<NSCopying>)key;
+(NSString *)uuidForSession;
+(NSString *)uuidForInstallation;
+(NSString *)uuidForDevice;
+(NSString *)uuidForDeviceMigratingValue:(NSString *)value commitMigration:(BOOL)commitMigration;
+(NSString *)uuidForDeviceMigratingValueForKey:(NSString *)key commitMigration:(BOOL)commitMigration;
+(NSString *)uuidForDeviceMigratingValueForKey:(NSString *)key service:(NSString *)service commitMigration:(BOOL)commitMigration;
+(NSString *)uuidForDeviceMigratingValueForKey:(NSString *)key service:(NSString *)service accessGroup:(NSString *)accessGroup commitMigration:(BOOL)commitMigration;
+(NSArray *)uuidsOfUserDevices;
+(NSArray *)uuidsOfUserDevicesExcludingCurrentDevice;

+(BOOL)uuidValueIsValid:(NSString *)uuidValue;

@end
