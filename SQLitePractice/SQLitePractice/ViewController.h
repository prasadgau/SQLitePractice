//
//  ViewController.h
//  SQLitePractice
//
//  Created by colors on 08/10/13.
//  Copyright (c) 2013 colors. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "/usr/include/sqlite3.h"

@interface ViewController : UIViewController{
    
    UITextField     *name;
    UITextField *address;
    UITextField *phone;
    UILabel *status;
    NSString        *databasePath;
    sqlite3 *contactDB;
}
@property (retain, nonatomic) IBOutlet UITextField *name;
@property (retain, nonatomic) IBOutlet UITextField *address;
@property (retain, nonatomic) IBOutlet UITextField *phone;
@property (retain, nonatomic) IBOutlet UILabel *status;
- (IBAction) saveData;
- (IBAction) findContact;
@end
