#include "contact.h"
void InitContact(Contact *pc){
    pc -> sz = 0;
    //memset() �ڴ�����
    //data����������ָ����Ԫ�ؿռ�ĵ�ַ
    memset(pc -> data,0,sizeof(pc -> data));
}
void AddContact(Contact *pc){
    if(pc -> sz == MAX){
        printf("ͨѶ¼�������޷����");
        return;
    }
    //����һ���˵���Ϣ
    printf("����������>");
    scanf("%s",pc -> data[pc->sz].name);//name��һ�����飬���Բ���Ҫȡ��ַ
    printf("����������>");
    scanf("%d",&(pc -> data[pc -> sz].age));
    printf("�������Ա�>");
    scanf("%s",pc -> data[pc->sz].sex);
    printf("������绰>");
    scanf("%s",pc -> data[pc->sz].tele);
    printf("�������ַ>");
    scanf("%s",pc -> data[pc->sz].addr);
    pc -> sz ++;
    printf("��ӳɹ�\n");
}
void PrintContact(const Contact *pc){
    int i = 0;
    //��ӡ����
    printf("%10s\t%10s\t%10s\t%12s\t%10s\t\n","����","����","�Ա�","�绰","��ַ");
    for(i = 0;i < pc -> sz;i++){
        printf("%10s\t%10d\t%10s\t%12s\t%10s\t\n",
               pc ->data[i].name,
               pc ->data[i].age,
               pc -> data[i].sex,
               pc -> data[i].tele,
               pc -> data[i].addr
        );
    }
}
static int FindByName(Contact * pc,char name[]){
    int i = 0;
    for(i = 0;i < pc -> sz;i++) {
        if(strcmp(pc->data[i].name,name) == 0){
            //strcmp ���ַ�����ͬ����0
            return i;
        }
    }
    return -1;
}
void DelContact(Contact *pc){
    char name[MAX_NAME] = {0};
    if(pc -> sz == 0){
        printf("ͨѶ¼Ϊ��\n");
        return;
    }
    //1.����
    //�л���û��
    printf("������Ҫɾ���˵�����:>");
    scanf("%s",name);
    int pos = FindByName(pc,name);
    if (pos == -1){
        printf("Ҫɾ�����˲�����\n");
        return;
    }
    //2.ɾ��
    int i = 0;
    for(i = pos;i < pc -> sz-1;i++){
        pc -> data[i] = pc -> data[i+1];
    }
    pc -> sz--;//sz����ͨѶ¼����
    printf("ɾ���ɹ�\n");
}
void SearchContact(Contact *pc){
    char name[MAX_NAME] = {0};
    if(pc -> sz == 0) {
        printf("ͨѶ¼Ϊ��\n");
        return;
    }
    printf("������Ҫ�����˵�����:>");
    scanf("%s",name);
    int pos = FindByName(pc,name);
    if (pos == -1){
        printf("Ҫ���ҵ��˲�����\n");
        return;
    }
    printf("%10s\t%10s\t%10s\t%12s\t%10s\t\n","����","����","�Ա�","�绰","��ַ");
    printf("%10s\t%10d\t%10s\t%12s\t%10s\t\n",
           pc ->data[pos].name,
           pc ->data[pos].age,
           pc -> data[pos].sex,
           pc -> data[pos].tele,
           pc -> data[pos].addr);
    printf("���ҳɹ�\n");
}
void ModifyContact(Contact *pc){
    char name[MAX_NAME] = {0};
    if(pc -> sz == 0) {
        printf("ͨѶ¼Ϊ��\n");
        return;
    }
    printf("������Ҫ�޸��˵�����:>");
    scanf("%s",name);
    int pos = FindByName(pc,name);
    if (pos == -1){
        printf("Ҫ�޸ĵ��˲�����\n");
        return;
    }
    printf("����������>");
    scanf("%s",pc -> data[pos].name);//name��һ�����飬���Բ���Ҫȡ��ַ
    printf("����������>");
    scanf("%d",&(pc -> data[pos].age));
    printf("�������Ա�>");
    scanf("%s",pc -> data[pos].sex);
    printf("������绰>");
    scanf("%s",pc -> data[pos].tele);
    printf("�������ַ>");
    scanf("%s",pc -> data[pos].addr);
    pc -> sz ++;
    printf("���ҳɹ�\n");
}
void SortContact(Contact *pc) {
    if (pc->sz == 0) {
        printf("ͨѶ¼Ϊ��\n");
        return;
    }
    int i, j;
    char *temp = NULL;
    for (i = 0; i < pc->sz - 1; i++) {
        for (j = 0; j < pc->sz - i - 1; j++) {
            // �Ƚϵ绰�������λ����
            if (pc->data[j].tele[0] > pc->data[j + 1].tele[0]) {
                // �����绰����
                //strdup ����һ���ַ��������������ַ����ĵ�ַ
                temp = strdup(pc->data[j].tele);
                strcpy(pc->data[j].tele, pc->data[j + 1].tele);
                strcpy(pc->data[j + 1].tele, temp);
                free(temp);
            }
        }
    }
}