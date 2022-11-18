//
//  Blufi.h
//
//  Created by 李剑刚 on 2021/12/1.
//


#import <Foundation/Foundation.h>

@class Blufi;
@protocol MyDelegate <NSObject>
@optional
-(void)blufiConnSuc;
-(void)blufiStateAvailable;
-(void)blufiStateFail;
-(void)blufiConnDis;
-(void)netConnSuc;
@end

@interface Blufi : NSObject
-(void)initBlufi;
-(void)startScan:(NSString *)serialNo;
- (void)configNet:(NSString *)ssid pw:(NSString *) pw;

@property (weak,nonatomic) id<MyDelegate>mydelegate;

@end
