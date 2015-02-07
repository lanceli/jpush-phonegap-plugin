//
//  PushTalkPlugin.h
//  PushTalk
//
//  Created by zhangqinghe on 13-12-13.
//
//

#import <Cordova/CDV.h>

@interface JPushPlugin : CDVPlugin{
    NSDictionary *notificationMessage;
    BOOL isInline;
}

@property (nonatomic, strong) NSDictionary *notificationMessage;
@property BOOL isInline;

-(void)setTagsWithAlias:(CDVInvokedUrlCommand*)command;
-(void)setTags:(CDVInvokedUrlCommand*)command;
-(void)setAlias:(CDVInvokedUrlCommand*)command;
-(void)getRegistrationID:(CDVInvokedUrlCommand*)command;
-(void)startLogPageView:(CDVInvokedUrlCommand*)command;
-(void)stopLogPageView:(CDVInvokedUrlCommand*)command;
-(void)notificationReceived;
@end
